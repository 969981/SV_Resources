/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219dcb0; name: FUN_0219dcb0
 */


undefined8 FUN_0219dcb0(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_2 + 8) == *(long *)*param_1) {
    lVar3 = param_1[1];
    puVar1 = (undefined1 *)0x0;
    if (param_2[0x20] != '\0') {
      puVar1 = param_2 + 0x10;
    }
    FUN_00e72c64(lVar3,*param_2,*(long *)(param_2 + 8),0,puVar1);
    FUN_0219d3a0(*(undefined8 *)*param_1);
    FUN_0219e104(lVar3 + 0xc0,param_2);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


