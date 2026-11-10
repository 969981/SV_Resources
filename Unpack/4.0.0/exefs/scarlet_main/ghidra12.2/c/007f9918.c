/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f9918; name: FUN_007f9918
 */


void FUN_007f9918(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_047d0860;
  if (*(char *)(param_2 + 8) == '\0') {
    lVar2 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
    if (lVar2 != 0) {
      FUN_007f9594(param_2 + 0x6450);
      uVar3 = **(undefined8 **)puVar1;
      *(undefined1 *)(param_2 + 8) = 1;
      *(undefined8 *)(param_2 + 0x68e0) = uVar3;
      local_38[0] = 0;
      goto LAB_007f997c;
    }
  }
  local_38[0] = 0x10408;
LAB_007f997c:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


