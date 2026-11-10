/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ff658; name: FUN_020ff658
 */


undefined8 FUN_020ff658(long param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if ((param_2 != (long *)0x0) && (param_3 != (uint *)0x0)) {
    if (*(uint *)(*(long *)(*(long *)(param_1 + 0x50) + 0x210) + 8) < 8) {
      uVar6 = 0;
    }
    else {
      uVar4 = (**(code **)(*param_2 + 0x730))(param_2,3);
      uVar1 = FUN_011e21c0(uVar4,*(undefined8 *)(param_1 + 0x50),param_2,uVar4 & 0xffffffff,
                           param_1 + 0xb0);
      uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      param_3[0] = 0;
      param_3[1] = 0;
      param_3[2] = uVar2;
      *param_3 = (uVar1 & 0xf) << 4 | ((uint)uVar4 & 0xffff) << 8 | 1;
      puVar5 = (undefined8 *)(**(code **)param_2[5])(param_2 + 5);
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0)) {
        uVar6 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar6;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      if (puVar5 == (undefined8 *)0x0) {
LAB_020ff758:
        uVar6 = 1;
      }
      else {
        uVar6 = 1;
        do {
          if (puVar5 == (undefined8 *)PTR_DAT_047d3f08) {
            uVar4 = FUN_01780124(param_2);
            if ((uVar4 & 1) == 0) {
              *param_3 = *param_3 | 0x2000000;
            }
            goto LAB_020ff758;
          }
          puVar5 = (undefined8 *)*puVar5;
        } while (puVar5 != (undefined8 *)0x0);
      }
    }
  }
  return uVar6;
}


