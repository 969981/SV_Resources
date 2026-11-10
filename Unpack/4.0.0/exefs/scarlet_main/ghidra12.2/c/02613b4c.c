/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02613b4c; name: FUN_02613b4c
 */


undefined1 FUN_02613b4c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_02613b8c();
  uVar1 = 0;
  if (puVar2 != (uint *)0x0) {
    if (param_3 < *puVar2) {
      uVar1 = *(undefined1 *)((long)puVar2 + (ulong)param_3 + 4);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


