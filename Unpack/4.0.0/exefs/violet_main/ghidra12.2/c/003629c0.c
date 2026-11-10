/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003629c0; name: FUN_003629c0
 */


/* WARNING: Removing unreachable block (ram,0x00362a4c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_003629c0(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 - 1U < 2) {
    return 0;
  }
  uVar1 = nnsocketFcntl(param_1,param_2,param_3);
  return uVar1;
}


