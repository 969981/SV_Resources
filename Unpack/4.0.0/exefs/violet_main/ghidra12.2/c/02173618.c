/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02173618; name: FUN_02173618
 */


ulong FUN_02173618(long *param_1,uint param_2,uint param_3)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  short *psVar8;
  
  uVar4 = FUN_021739cc(param_1,param_3);
  uVar2 = uVar4 >> 0x12 & 7;
  uVar5 = 0;
  if (uVar2 != 2) {
    uVar5 = uVar2;
  }
  if (param_2 < 8) {
    uVar2 = uVar4 & 3;
    uVar6 = (ulong)uVar2;
    switch(param_2) {
    case 1:
      uVar6 = (ulong)uVar5;
      break;
    case 2:
      uVar6 = (ulong)(uVar2 + uVar5 * 2);
      break;
    case 3:
      uVar4 = 3;
      if (uVar5 != 1) {
        uVar4 = uVar2;
      }
      uVar6 = (ulong)uVar4;
      break;
    case 4:
      if (((*PTR_DAT_047d8c98 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c98);
      }
      *(undefined8 *)PTR_DAT_047d8ca8 = *(undefined8 *)PTR_DAT_047d8ca0;
      uVar7 = *(undefined8 *)(*(long *)(param_1[0xc] + (ulong)param_3 * 0x18) + 0x30);
      if (((*PTR_DAT_047d8c98 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c98);
      }
      *(undefined8 *)PTR_DAT_047d8ca8 = *(undefined8 *)PTR_DAT_047d8ca0;
      uVar6 = FUN_02171c28(uVar7);
      return uVar6;
    case 5:
      if ((uVar4 & 0x200000) != 0) {
        uVar5 = 2;
      }
      uVar6 = (ulong)uVar5;
      break;
    case 6:
      psVar8 = *(short **)(*(long *)(param_1[0xc] + (ulong)param_3 * 0x18) + 0x30);
      if (*psVar8 == 0) {
LAB_0217378c:
        uVar6 = 1;
      }
      else {
        do {
          uVar6 = FUN_0131cbf0(psVar8,&DAT_03d316d2);
          if (((uVar6 & 1) != 0) || (uVar6 = FUN_0131cbf0(psVar8,&DAT_03d3155a), (uVar6 & 1) != 0))
          goto LAB_02173760;
          if (*psVar8 != 0x30) goto LAB_0217378c;
          psVar1 = psVar8 + 1;
          uVar6 = 1;
          psVar8 = psVar8 + 1;
        } while (*psVar1 != 0);
      }
      break;
    case 7:
      uVar5 = (**(code **)(*param_1 + 200))(param_1);
      uVar6 = (ulong)(uVar5 & 0xffff);
    }
  }
  else {
LAB_02173760:
    uVar6 = 0;
  }
  return uVar6;
}


