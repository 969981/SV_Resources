/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039fd38; name: FUN_0039fd38
 */


void FUN_0039fd38(undefined4 *param_1,long param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  tm *ptVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  int local_98;
  int local_94;
  long local_90;
  long local_88;
  long local_80;
  tm tStack_78;
  long local_38;
  
  if (*(char *)(param_2 + 8) != '\0') {
    lVar8 = *param_3;
    if (lVar8 < 0) {
      if (lVar8 < -0x7ffff894) {
        uVar9 = 0x8000000000000000;
        *param_1 = 0;
        goto LAB_0039fdd4;
      }
    }
    else if (0x8000076b < lVar8) {
      *param_1 = 0;
      uVar9 = 0x7fffffffffffffff;
LAB_0039fdd4:
      *(undefined8 *)(param_1 + 6) = uVar9;
      *(undefined8 *)(param_1 + 4) = uVar9;
      *(undefined8 *)(param_1 + 2) = uVar9;
      return;
    }
    uVar2 = FUN_003a02d0(param_3,0,&local_88,&local_94);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_003a02d0(param_3,1,&local_90,&local_98);
      lVar8 = local_90;
      iVar1 = local_98;
      if ((uVar2 & 1) != 0) {
        if (local_88 == local_90) {
          lVar8 = std::chrono::system_clock::from_time_t(0);
          local_88 = lVar8 / 1000000 + local_88;
          uVar7 = 0;
          lVar5 = local_88;
          lVar8 = local_88;
          goto LAB_0039ff98;
        }
        if (local_90 < local_88) {
          local_90 = local_88;
          local_88 = lVar8;
          local_98 = local_94;
          local_94 = iVar1;
        }
        iVar1 = local_98;
        lVar8 = local_90;
        local_38 = local_88;
        if (local_88 + 1 != local_90) {
          lVar6 = (long)local_98;
          lVar5 = local_88;
          local_38 = local_88;
          do {
            while( true ) {
              lVar3 = lVar8 - lVar5;
              if (lVar3 < 0) {
                lVar3 = lVar3 + 1;
              }
              local_80 = lVar5 + (lVar3 >> 1);
              ptVar4 = localtime_r(&local_80,&tStack_78);
              if (ptVar4 == (tm *)0x0) {
                local_38 = lVar5;
                goto LAB_003a00cc;
              }
              if (ptVar4->tm_gmtoff != lVar6) break;
              lVar8 = local_80;
              if (lVar5 + 1 == local_80) goto LAB_0039ffdc;
            }
            lVar5 = local_80;
            local_38 = local_80;
          } while (local_80 + 1 != lVar8);
        }
        goto LAB_0039ffdc;
      }
    }
    if ((*param_3 < 0x7b2) ||
       ((*param_3 == 0x7b2 &&
        (((char)param_3[1] < '\x01' ||
         (((char)param_3[1] == '\x01' &&
          ((*(char *)((long)param_3 + 9) < '\x01' ||
           ((*(char *)((long)param_3 + 9) == '\x01' &&
            ((*(char *)((long)param_3 + 10) < '\0' ||
             ((*(char *)((long)param_3 + 10) == '\0' &&
              ((*(char *)((long)param_3 + 0xb) < '\0' ||
               ((*(char *)((long)param_3 + 0xb) == '\0' && (*(char *)((long)param_3 + 0xc) < '\0')))
               ))))))))))))))))) {
      uVar7 = 0;
      lVar5 = -0x8000000000000000;
      lVar8 = -0x8000000000000000;
      local_88 = -0x8000000000000000;
    }
    else {
      uVar7 = 0;
      lVar5 = 0x7fffffffffffffff;
      lVar8 = 0x7fffffffffffffff;
      local_88 = 0x7fffffffffffffff;
    }
    goto LAB_0039ff98;
  }
  if (((DAT_047f1610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f1610), iVar1 != 0)) {
    lVar8 = std::chrono::system_clock::from_time_t(0);
    lVar8 = SUB168(SEXT816(lVar8) * SEXT816(-0x431bde82d7b634db),8);
    uVar2 = (lVar8 >> 0x12) - (lVar8 >> 0x3f) ^ 0x8000000000000000;
    auVar10 = FUN_00398570(0x7b2,1,1,0,(long)uVar2 / 0x3c,(long)uVar2 % 0x3c);
    DAT_047f1620 = auVar10._0_8_;
    DAT_047f1628 = auVar10._8_8_ & 0xffffffffff;
    __cxa_guard_release(&DAT_047f1610);
  }
  if (((DAT_047f1618 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f1618), iVar1 != 0)) {
    lVar8 = std::chrono::system_clock::from_time_t(0);
    lVar8 = SUB168(SEXT816(lVar8) * SEXT816(-0x431bde82d7b634db),8);
    lVar8 = ((lVar8 >> 0x12) - (lVar8 >> 0x3f)) + 0x7fffffffffffffff;
    auVar10 = FUN_00398570(0x7b2,1,1,0,lVar8 / 0x3c,lVar8 % 0x3c);
    DAT_047f1630 = auVar10._0_8_;
    DAT_047f1638 = auVar10._8_8_ & 0xffffffffff;
    __cxa_guard_release(&DAT_047f1618);
  }
  lVar8 = *param_3;
  if (lVar8 < DAT_047f1620) {
LAB_0039fdb4:
    lVar8 = -0x8000000000000000;
    goto LAB_003a019c;
  }
  if (lVar8 == DAT_047f1620) {
    if ((char)param_3[1] < (char)DAT_047f1628) goto LAB_0039fdb4;
    if ((char)param_3[1] == (char)DAT_047f1628) {
      if (*(char *)((long)param_3 + 9) < DAT_047f1628._1_1_) goto LAB_0039fdb4;
      if (*(char *)((long)param_3 + 9) == DAT_047f1628._1_1_) {
        if (*(char *)((long)param_3 + 10) < DAT_047f1628._2_1_) goto LAB_0039fdb4;
        if (*(char *)((long)param_3 + 10) == DAT_047f1628._2_1_) {
          if ((*(char *)((long)param_3 + 0xb) < DAT_047f1628._3_1_) ||
             ((*(char *)((long)param_3 + 0xb) == DAT_047f1628._3_1_ &&
              (*(char *)((long)param_3 + 0xc) < DAT_047f1628._4_1_)))) goto LAB_0039fdb4;
        }
      }
    }
  }
  if (DAT_047f1630 < lVar8) {
LAB_0039ff50:
    lVar8 = 0x7fffffffffffffff;
  }
  else {
    if (DAT_047f1630 == lVar8) {
      if ((char)DAT_047f1638 < (char)param_3[1]) goto LAB_0039ff50;
      if ((char)DAT_047f1638 == (char)param_3[1]) {
        if (DAT_047f1638._1_1_ < *(char *)((long)param_3 + 9)) goto LAB_0039ff50;
        if (DAT_047f1638._1_1_ == *(char *)((long)param_3 + 9)) {
          if (DAT_047f1638._2_1_ < *(char *)((long)param_3 + 10)) goto LAB_0039ff50;
          if (DAT_047f1638._2_1_ == *(char *)((long)param_3 + 10)) {
            if ((DAT_047f1638._3_1_ < *(char *)((long)param_3 + 0xb)) ||
               ((DAT_047f1638._3_1_ == *(char *)((long)param_3 + 0xb) &&
                (DAT_047f1638._4_1_ < *(char *)((long)param_3 + 0xc))))) goto LAB_0039ff50;
          }
        }
      }
    }
    uVar2 = param_3[1];
    lVar8 = FUN_0039ebb0(lVar8,uVar2 & 0xffffffff,uVar2 >> 8 & 0xffffffff,0x7b2,1,1);
    lVar5 = std::chrono::system_clock::from_time_t(0);
    lVar8 = lVar5 / 1000000 + (long)((int)(uVar2 >> 8) >> 0x18) +
            ((lVar8 * 0x18 + (long)(((int)uVar2 << 8) >> 0x18)) * 0x3c + (long)((int)uVar2 >> 0x18))
            * 0x3c;
  }
LAB_003a019c:
  *param_1 = 0;
  *(long *)(param_1 + 6) = lVar8;
  *(long *)(param_1 + 2) = lVar8;
  *(long *)(param_1 + 4) = lVar8;
  return;
  while ((ptVar4 = localtime_r(&local_38,&tStack_78), ptVar4 == (tm *)0x0 ||
         (ptVar4->tm_gmtoff != lVar6))) {
LAB_003a00cc:
    local_38 = local_38 + 1;
    if (local_38 == lVar8) goto LAB_0039ffdc;
  }
  lVar8 = local_38;
LAB_0039ffdc:
  lVar3 = std::chrono::system_clock::from_time_t(0);
  lVar6 = local_88;
  lVar5 = local_90;
  lVar8 = lVar3 / 1000000 + lVar8;
  if (local_94 < iVar1) {
    lVar3 = std::chrono::system_clock::from_time_t(0);
    lVar6 = local_88;
    lVar5 = lVar3 / 1000000 + lVar5;
    lVar3 = std::chrono::system_clock::from_time_t(0);
    local_88 = lVar3 / 1000000 + lVar6;
    uVar7 = 1;
  }
  else {
    lVar5 = std::chrono::system_clock::from_time_t(0);
    lVar3 = local_90;
    lVar5 = lVar5 / 1000000 + lVar6;
    lVar6 = std::chrono::system_clock::from_time_t(0);
    local_88 = lVar6 / 1000000 + lVar3;
    uVar7 = 2;
  }
LAB_0039ff98:
  *param_1 = uVar7;
  *(long *)(param_1 + 6) = local_88;
  *(long *)(param_1 + 2) = lVar5;
  *(long *)(param_1 + 4) = lVar8;
  return;
}


