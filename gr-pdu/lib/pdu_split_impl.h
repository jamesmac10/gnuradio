/* -*- c++ -*- */
/*
 * Copyright 2021 NTESS LLC.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef INCLUDED_PDU_PDU_SPLIT_IMPL_H
#define INCLUDED_PDU_PDU_SPLIT_IMPL_H

#include <gnuradio/pdu/pdu_split.h>

namespace gr {
namespace pdu {

class pdu_split_impl : public pdu_split
{
private:
    const bool d_pass_empty_data;

public:
    pdu_split_impl(const bool pass_empty_data);
    ~pdu_split_impl();

    void handle_pdu(pmt::pmt_t pdu);
};

} // namespace pdu
} // namespace gr

#endif /* INCLUDED_PDU_PDU_SPLIT_IMPL_H */