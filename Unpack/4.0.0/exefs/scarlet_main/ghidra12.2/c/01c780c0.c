/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c780c0; name: FUN_01c780c0
 */


void FUN_01c780c0(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_04815b68;
  uVar1 = FUN_017f7db0(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 8) - ((ulong)~uVar2 & 1)) = uVar1;
  }
  return;
}


