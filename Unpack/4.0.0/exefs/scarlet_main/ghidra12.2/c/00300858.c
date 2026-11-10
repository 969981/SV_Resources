/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00300858; name: FUN_00300858
 */


void FUN_00300858(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_58;
  long local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 uStack_38;
  
  puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = *param_2;
    *param_2 = 0;
    *puVar3 = &PTR_LAB_04494488;
                    /* try { // try from 0030089c to 003008a7 has its CatchHandler @ 00300934 */
    iVar1 = FUN_003ad3a0(lVar4,0);
    if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00300920 to 00300923 has its CatchHandler @ 00300934 */
      abort();
    }
                    /* try { // try from 003008b8 to 003008c3 has its CatchHandler @ 00300930 */
    FUN_003670f0(&local_50,iVar1);
    local_58 = (long)&uStack_48 + 1;
    if (local_50 != 0) {
      local_58 = local_40;
    }
                    /* try { // try from 003008dc to 003008e7 has its CatchHandler @ 0030092c */
    iVar2 = FUN_003ad3a0(lVar4,&local_58);
    if (iVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00300924 to 00300927 has its CatchHandler @ 0030092c */
      abort();
    }
    puVar3[4] = uStack_38;
    puVar3[3] = local_40;
    puVar3[2] = uStack_48;
    puVar3[1] = local_50;
    if (lVar4 != 0) {
                    /* try { // try from 00300900 to 00300907 has its CatchHandler @ 00300928 */
      FUN_003b8e30(lVar4);
    }
  }
  *param_1 = puVar3;
  return;
}


