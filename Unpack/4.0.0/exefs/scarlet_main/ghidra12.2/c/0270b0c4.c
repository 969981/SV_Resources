/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270b0c4; name: FUN_0270b0c4
 */


void FUN_0270b0c4(long param_1,char *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  if (*param_2 != '\0') {
    lVar2 = *(long *)(param_2 + 8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x378);
  lVar2 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(lVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0270b128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1ef8)(uVar3,uVar1,lVar2 + param_3);
  return;
}


