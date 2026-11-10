/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053f0a8; name: FUN_0053f0a8
 */


void FUN_0053f0a8(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  bVar1 = FUN_01f704f0(param_2);
  *param_1 = bVar1 & 1;
  FUN_01f70538(param_1 + 8,param_2,&DAT_03c9e3f1);
  FUN_01f70538(param_1 + 0x28,param_2,&DAT_03bda6c1);
                    /* try { // try from 0053f0fc to 0053f10b has its CatchHandler @ 0053f18c */
  uVar2 = FUN_01f7057c(param_2,&DAT_03c54d00);
  *(undefined2 *)(param_1 + 0x48) = uVar2;
  FUN_01f70538(param_1 + 0x50,param_2,&DAT_03c02638);
                    /* try { // try from 0053f128 to 0053f137 has its CatchHandler @ 0053f160 */
  uVar3 = FUN_01f7057c(param_2,&DAT_03be1761);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  FUN_0053e408(param_1 + 0x78,param_2,&DAT_03c2d030);
  return;
}


