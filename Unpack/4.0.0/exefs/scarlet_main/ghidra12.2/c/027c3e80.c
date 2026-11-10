/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c3e80; name: FUN_027c3e80
 */


void FUN_027c3e80(long *param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  
  if (*param_1 == 0) {
    lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar3 != 0) {
                    /* try { // try from 027c3eb8 to 027c3ec3 has its CatchHandler @ 027c3ef8 */
      FUN_00269fa4(lVar3,0);
    }
    *param_1 = lVar3;
  }
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
  FUN_00258e34(param_1,param_2,pbVar2,uVar1);
  return;
}


