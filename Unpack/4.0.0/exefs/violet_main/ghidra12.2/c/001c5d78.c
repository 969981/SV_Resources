/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c5d78; name: FUN_001c5d78
 */


undefined8 FUN_001c5d78(long param_1,undefined1 *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if ((*(char *)(param_1 + 1) == '\x02') &&
     (lVar1 = FUN_001cb3a4(2,param_1 + 4,param_2,0x2e), lVar1 != 0)) {
    uVar2 = nnsocketInetNtohs(*(undefined2 *)(param_1 + 2));
    uVar3 = 1;
    *param_3 = uVar2 & 0xffff;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    piVar4 = __errno_location();
    uVar3 = 0;
    *piVar4 = 0x61;
  }
  return uVar3;
}


