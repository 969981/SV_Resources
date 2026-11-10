/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d1d4f8; name: FUN_01d1d4f8
 */


bool FUN_01d1d4f8(long *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  short *psVar7;
  short *local_78;
  int local_70 [16];
  int local_14;
  
  lVar3 = FUN_0168bd44();
  if (lVar3 != 0) {
    lVar3 = *param_1;
    uVar4 = FUN_01920760(*(undefined8 *)(lVar3 + 0x30),param_2,param_3);
    if ((uVar4 & 1) != 0) {
      if (((*PTR_DAT_047d89f8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d89f8);
      }
      lVar6 = *(long *)PTR_DAT_047d8a00;
      *(long *)PTR_DAT_047d8a08 = lVar6;
      uVar5 = (uint)*(byte *)(lVar6 + 0x2c);
      uVar1 = uVar5 - 1;
      if ((uVar1 < 10 && uVar5 != 0) && uVar1 != 5) {
        local_78 = *(short **)(lVar3 + 0x30);
        uVar5 = 0;
        psVar7 = local_78;
        do {
          if (*psVar7 == 0) {
            local_14 = 0;
            if (uVar5 == 0) goto LAB_01d1d614;
            break;
          }
          if (*psVar7 == 0x10) {
            lVar3 = (ulong)(ushort)psVar7[1] + 2;
            psVar7 = psVar7 + lVar3;
          }
          else {
            psVar7 = psVar7 + 1;
            lVar3 = 1;
          }
          uVar5 = (int)lVar3 + uVar5;
        } while (uVar5 < 0x800);
        local_14 = 0;
        iVar2 = (**(code **)(*DAT_0483b098 + 0x28))
                          (DAT_0483b098,local_70,*(undefined4 *)(&DAT_03d317dc + (ulong)uVar1 * 4),
                           &local_78,1);
        if (iVar2 == 0) {
          local_14 = 0;
          if (local_70[0] != 0) {
            local_14 = 1;
            FUN_019a5cf0(&local_14,&local_78);
          }
        }
        else {
          local_14 = -1;
        }
LAB_01d1d614:
        return local_14 < 1;
      }
    }
  }
  return false;
}


