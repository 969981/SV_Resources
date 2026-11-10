/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045d220; name: FUN_0045d220
 */


undefined8 FUN_0045d220(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 *local_18;
  
  local_18 = auStack_30;
  local_2c = param_2;
  uStack_28 = param_3;
  puVar1 = auStack_30;
  if ((DAT_047f1a00 == 0) ||
     (iVar2 = FUN_0047e200(DAT_047f1a00,auStack_30), puVar1 = local_18, iVar2 < 0)) {
    local_18 = puVar1;
    ppuVar3 = (undefined1 **)FUN_0045c970(&local_18,&PTR_DAT_044b5c80,0x2b,8,&LAB_0045d2c0);
    if (ppuVar3 == (undefined1 **)0x0) {
      return 0;
    }
  }
  else {
    local_18 = (undefined1 *)FUN_0047e450(DAT_047f1a00,iVar2);
    ppuVar3 = &local_18;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar3;
  }
  return 1;
}


