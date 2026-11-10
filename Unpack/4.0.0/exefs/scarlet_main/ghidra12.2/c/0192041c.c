/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192041c; name: FUN_0192041c
 */


undefined8 FUN_0192041c(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  short *psVar6;
  long lVar7;
  undefined8 uVar8;
  short *local_78;
  int local_70 [16];
  int local_14;
  
  if (*param_2 == 0) {
    return 0;
  }
  FUN_019205c0(*(undefined8 *)(param_1 + 0x28));
  lVar7 = *param_2;
  uVar3 = FUN_01920760(*(undefined8 *)(lVar7 + 0x30),*(undefined2 *)(lVar7 + 0x52),param_3);
  if ((uVar3 & 1) != 0) {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar5 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar5;
    uVar4 = (uint)*(byte *)(lVar5 + 0x2c);
    uVar1 = uVar4 - 1;
    if ((uVar1 < 10 && uVar4 != 0) && uVar1 != 5) {
      local_78 = *(short **)(lVar7 + 0x30);
      uVar4 = 0;
      psVar6 = local_78;
      do {
        if (*psVar6 == 0) {
          if (uVar4 == 0) goto LAB_0192051c;
          break;
        }
        if (*psVar6 == 0x10) {
          lVar7 = (ulong)(ushort)psVar6[1] + 2;
          psVar6 = psVar6 + lVar7;
        }
        else {
          psVar6 = psVar6 + 1;
          lVar7 = 1;
        }
        uVar4 = (int)lVar7 + uVar4;
      } while (uVar4 < 0x800);
      local_14 = 0;
      iVar2 = (**(code **)(*DAT_0483b098 + 0x28))
                        (DAT_0483b098,local_70,*(undefined4 *)(&DAT_03d317dc + (ulong)uVar1 * 4),
                         &local_78,1);
      if ((iVar2 != 0) || (local_70[0] == 0)) {
LAB_0192051c:
        uVar8 = 1;
        goto LAB_01920520;
      }
      uVar8 = 1;
      local_14 = 1;
      FUN_019a5cf0(&local_14,&local_78);
      if (local_14 < 1) goto LAB_01920520;
    }
  }
  FUN_019209d0(*param_2,param_3 & 0xff);
  uVar8 = 0;
LAB_01920520:
  FUN_01920670();
  return uVar8;
}


