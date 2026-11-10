/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aa2894; name: FUN_01aa2894
 */


void FUN_01aa2894(short *param_1,short *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  short *psVar5;
  short *psVar6;
  undefined8 uVar7;
  short local_238 [4];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined8 local_1c0;
  undefined1 local_1b8;
  ushort local_1b0;
  undefined1 local_1ae;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined1 local_18c;
  undefined1 auStack_f0 [132];
  byte local_6c [28];
  
  if (((DAT_04839790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839790), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  lVar1 = DAT_04839780;
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    return;
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if ((lVar3 != 0) && (local_6c[0] = FUN_01077730(), local_6c[0] != 0xfd)) {
    uVar4 = FUN_0183389c(param_2,local_6c);
    psVar6 = *(short **)(lVar1 + 0x4058);
    psVar5 = *(short **)(lVar1 + 0x4060);
    if (psVar6 != psVar5) {
      do {
        if ((*(int *)(psVar6 + 0x3c) == 4) && (*psVar6 == *param_1)) goto LAB_01aa29ec;
        psVar6 = psVar6 + 0x58;
      } while (psVar5 != psVar6);
      psVar6 = psVar5;
    }
LAB_01aa29ec:
    if (psVar5 != psVar6) {
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar1 + 0x38);
        local_238[0] = 0;
        memset(auStack_230,0,0x74);
        local_1c0 = CONCAT44(0x904,(undefined4)local_1c0);
        local_1b8 = 1;
        local_1b0 = local_1b0 & 0xff00;
        FUN_015bc504((long)&local_1ac + 4,uVar7);
        local_238[0] = *psVar6;
        FUN_00ca1a48(auStack_230,psVar6 + 4);
        FUN_00c6c994(auStack_220,psVar6 + 0xc);
        FUN_00d4ca00(auStack_210,psVar6 + 0x14);
        FUN_01277088(auStack_200,psVar6 + 0x1c);
        FUN_01084328(auStack_1f0,psVar6 + 0x24);
        FUN_0112bdf8(auStack_1e0,psVar6 + 0x2c);
        FUN_01ea34b0(auStack_1d0,*(undefined8 *)(psVar6 + 0x34));
        FUN_01ea35ec(auStack_1c8,*(undefined8 *)(psVar6 + 0x38));
        local_1c0 = *(undefined8 *)(psVar6 + 0x3c);
        local_1b8 = (undefined1)psVar6[0x40];
        local_238[0] = *param_2;
        local_1b0 = CONCAT11(local_1b0._1_1_,2);
        FUN_015bce24(lVar1 + 0x4090,local_238);
        FUN_00de98c8(lVar1 + 0x4058,psVar6);
        FUN_015bc5f4(auStack_f0);
        FUN_015bca58((long)&local_19c + 4);
        FUN_01836250(local_238);
      }
      else {
        *psVar6 = *param_2;
      }
    }
    psVar6 = *(short **)(lVar1 + 0x4090);
    psVar5 = *(short **)(lVar1 + 0x4098);
    if (psVar6 != psVar5) {
      do {
        if ((*(int *)(psVar6 + 0x3c) == 4) && (*psVar6 == *param_1)) goto LAB_01aa2a44;
        psVar6 = psVar6 + 0xe4;
      } while (psVar5 != psVar6);
      psVar6 = psVar5;
    }
LAB_01aa2a44:
    if (psVar5 != psVar6) {
      if ((uVar4 & 1) == 0) {
        *psVar6 = *param_2;
      }
      else {
        local_238[0] = 0;
        memset(auStack_230,0,0x74);
        local_1c0 = CONCAT44(0x904,(undefined4)local_1c0);
        local_1b8 = 1;
        local_1b0 = 0;
        local_1ae = 0;
        local_1ac = 0;
        local_1a4 = 0;
        local_19c = 0;
        local_194 = 0;
        local_18c = 0;
        local_238[0] = *psVar6;
        FUN_00ca1a48(auStack_230,psVar6 + 4);
        FUN_00c6c994(auStack_220,psVar6 + 0xc);
        FUN_00d4ca00(auStack_210,psVar6 + 0x14);
        FUN_01277088(auStack_200,psVar6 + 0x1c);
        FUN_01084328(auStack_1f0,psVar6 + 0x24);
        FUN_0112bdf8(auStack_1e0,psVar6 + 0x2c);
        FUN_01ea34b0(auStack_1d0,*(undefined8 *)(psVar6 + 0x34));
        FUN_01ea35ec(auStack_1c8,*(undefined8 *)(psVar6 + 0x38));
        local_1c0 = *(undefined8 *)(psVar6 + 0x3c);
        local_1b8 = (undefined1)psVar6[0x40];
        local_238[0] = *param_2;
        local_1ae = 0;
        local_1b0 = 0;
        local_18c = 0;
        local_194 = 0;
        local_19c = 0;
        local_1a4 = 0;
        local_1ac = 0;
        FUN_01835a68(lVar1 + 0x4058,local_238);
        FUN_01ea347c(lVar1 + 0x4090,psVar6);
        FUN_01836250(local_238);
      }
    }
  }
  return;
}


