/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012efb0; name: FUN_0012efb0
 */


void FUN_0012efb0(long *param_1,undefined4 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1[2] + 0x38);
  if (*(int *)(*param_1 + 0x2c) == 0) {
    pcVar1 = "main function";
  }
  else {
    pcVar1 = (char *)FUN_0012e860(uVar2,"function at line %d");
  }
  uVar2 = FUN_0012e860(uVar2,"too many %s (limit is %d) in %s",param_3,param_2,pcVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00138770(param_1[2],uVar2);
}


