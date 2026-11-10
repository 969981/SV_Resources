/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00164c64; name: FUN_00164c64
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00164c64(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (0 < param_1[1]) {
    if ((param_1[1] < param_2) &&
       (iVar1 = FUN_0015ed20("v:/devel/projects/oodle2/core/newlz_vtable.h",0x89,"extend",
                             "size <= m_size"), iVar1 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  if (param_3 != (long *)0x0) {
    lVar2 = param_3[1];
    uVar4 = ((param_3[3] - lVar2) + *param_3) - 0x10;
    if (param_2 <= (long)(uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU))) {
      uVar5 = param_2 + 0xfU & 0xfffffffffffffff0;
      uVar4 = lVar2 + uVar5;
      if ((ulong)(*param_3 + param_3[3]) < uVar4) {
        if ((int)param_3[4] == 0) {
          lVar2 = 0;
          uVar3 = 0;
        }
        else {
          lVar2 = (**(code **)PTR_PTR_047cb890)(uVar5,0x10);
          if (lVar2 == 0) {
            FUN_0015ed40(uVar5);
            uVar3 = 0;
          }
          else {
            uVar3 = 0;
          }
        }
      }
      else {
        param_3[1] = uVar4;
        uVar5 = param_3[2];
        if ((ulong)param_3[2] <= uVar4) {
          uVar5 = uVar4;
        }
        uVar3 = 0;
        param_3[2] = uVar5;
      }
      goto LAB_00164d14;
    }
  }
  lVar2 = (**(code **)PTR_PTR_047cb890)(param_2,0x10);
  if (lVar2 == 0) {
    FUN_0015ed40(param_2);
  }
  uVar3 = 1;
LAB_00164d14:
  *(undefined4 *)(param_1 + 2) = uVar3;
  *param_1 = lVar2;
  param_1[1] = param_2;
  return;
}


