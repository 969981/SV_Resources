/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003de9a0; name: FUN_003de9a0
 */


void FUN_003de9a0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 *local_160;
  undefined4 local_158 [70];
  
  local_160 = local_158;
  local_158[0] = param_2;
  if (DAT_047f1800 == 0) goto LAB_003dea04;
LAB_003de9e4:
  local_160 = local_158;
  iVar1 = FUN_0047e200(DAT_047f1800,local_158);
  if (iVar1 < 0) goto LAB_003dea04;
  lVar2 = FUN_0047e450(DAT_047f1800,iVar1);
  do {
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 8) & 1) == 0)) {
LAB_003dea48:
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
      }
      return;
    }
    local_158[0] = *(undefined4 *)(lVar2 + 4);
    local_160 = local_158;
    if (DAT_047f1800 != 0) goto LAB_003de9e4;
LAB_003dea04:
    plVar3 = (long *)FUN_0045c970(&local_160,&PTR_DAT_044a1c48,0x14,8,&LAB_003debd0);
    if (plVar3 == (long *)0x0) goto LAB_003dea48;
    lVar2 = *plVar3;
  } while( true );
}


