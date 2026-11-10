/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d2ac0; name: FUN_012d2ac0
 */


void FUN_012d2ac0(MultiWaitType *param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_012d2e40(param_1 + 0x48);
  FUN_012d2efc(param_1 + 0x30);
  nn::os::InitializeMultiWait(param_1);
  return;
}


