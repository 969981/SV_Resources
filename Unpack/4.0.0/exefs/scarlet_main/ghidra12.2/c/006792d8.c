/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006792d8; name: FUN_006792d8
 */


void FUN_006792d8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (long *)FUN_01cf7e20();
  param_1[3] = plVar2;
  if (param_2 != 0) {
    if (0x2aaaaaaaaaaaaaa < param_2) {
                    /* try { // try from 006793a0 to 006793a7 has its CatchHandler @ 006793a8 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,param_2 * 0x60,8);
    puVar1 = puVar3 + param_2 * 0xc;
    param_1[2] = puVar1;
    *param_1 = puVar3;
    param_1[1] = puVar3;
    do {
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      uVar4 = FUN_01cf7e20();
      puVar3[2] = 0;
      puVar3[3] = uVar4;
      *puVar3 = 0;
      puVar3[1] = 0;
      uVar4 = FUN_01cf7e20();
      puVar3[6] = 0;
      puVar3[7] = uVar4;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_01e74fb0(puVar3 + 8);
      puVar3[9] = 0;
      puVar3[10] = 0;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      puVar3 = puVar3 + 0xc;
    } while (puVar3 != puVar1);
    param_1[1] = puVar1;
  }
  return;
}


