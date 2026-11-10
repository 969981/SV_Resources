/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00504f80; name: FUN_00504f80
 */


void FUN_00504f80(long *param_1)

{
  void *__src;
  undefined8 *puVar1;
  long *plVar2;
  void *__dest;
  long extraout_x1;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  
  (**(code **)(*param_1 + 0x98))();
  if ((extraout_x1 == 0) &&
     (puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x98))(param_1), puVar1 != (undefined8 *)0x0))
  {
    puVar3 = (ulong *)*puVar1;
    if ((*puVar3 & 1) == 0) {
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = (void *)puVar3[2];
    }
    else {
      uVar4 = puVar3[1];
      __src = (void *)puVar3[2];
      if (uVar4 < 0x17) {
        __dest = (void *)((ulong)&local_50 | 1);
        local_50 = CONCAT71(local_50._1_7_,(char)((int)uVar4 << 1));
      }
      else {
        if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
        local_50 = uVar5 | 1;
        uStack_48 = uVar4;
        local_40 = __dest;
      }
      memcpy(__dest,__src,uVar4 + 1);
    }
    if ((local_50 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
    }
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
                    /* try { // try from 00505028 to 00505037 has its CatchHandler @ 00505120 */
  FUN_004f4acc(extraout_x1,param_1,&local_50);
  if (uStack_48 != local_50) {
    uVar4 = 0;
    do {
                    /* try { // try from 0050504c to 00505057 has its CatchHandler @ 00505124 */
      FUN_004f207c(extraout_x1,param_1,*(undefined8 *)(local_50 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)((long)(uStack_48 - local_50) >> 3));
  }
                    /* try { // try from 0050506c to 00505087 has its CatchHandler @ 00505120 */
  plVar2 = (long *)FUN_004efc34(extraout_x1,param_1);
  if (*plVar2 != plVar2[1]) {
    FUN_00514600();
  }
  if (local_50 != 0) {
    uStack_48 = local_50;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


