/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023592d8; name: FUN_023592d8
 */


void FUN_023592d8(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_0235964c(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_02359708(param_1 + 8);
    return;
  case 2:
    FUN_023597c8(param_1 + 8);
    return;
  case 3:
    FUN_02359894(param_1 + 8);
    return;
  default:
    return;
  }
}


