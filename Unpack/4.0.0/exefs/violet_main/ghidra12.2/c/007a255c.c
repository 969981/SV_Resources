/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a255c; name: FUN_007a255c
 */


void FUN_007a255c(long param_1)

{
  int local_30 [4];
  int local_20 [4];
  
  FUN_007a86ac(local_20,*(undefined8 *)(param_1 + 0x120));
  if (local_20[0] != 0) {
    FUN_00cbd7c0(local_30,local_20);
    if (*(int *)(param_1 + 0x1a8) != local_30[0]) {
      FUN_018ff39c(param_1 + 0x1a8,local_30);
    }
  }
  return;
}


