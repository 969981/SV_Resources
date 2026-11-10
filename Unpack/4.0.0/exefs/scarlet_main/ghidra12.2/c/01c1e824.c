/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c1e824; name: FUN_01c1e824
 */


void FUN_01c1e824(void *param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_01c1ea64(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_01c1ead0(param_1,param_2 + 8);
    return;
  case 2:
    FUN_01c1eb40(param_1,param_2 + 8);
    return;
  case 3:
    FUN_01c1ebbc(param_1,param_2 + 8);
    return;
  default:
    memset(param_1,0,0x948);
    *(undefined4 *)((long)param_1 + 0x91c) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x920) = 0;
    *(undefined8 *)((long)param_1 + 0x928) = 0;
    *(undefined1 *)((long)param_1 + 0x938) = 0;
    return;
  }
}


