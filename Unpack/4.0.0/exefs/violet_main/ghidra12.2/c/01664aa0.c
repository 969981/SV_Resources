/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01664aa0; name: FUN_01664aa0
 */


bool FUN_01664aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  byte local_2c [4];
  undefined8 local_28;
  
  if ((*(char *)(param_1 + 0x68) != '\0') ||
     ((*(long *)(param_1 + 0x50) != 0 && (*(short *)(*(long *)(param_1 + 0x50) + 0x1a) != 0)))) {
    plVar2 = *(long **)(param_1 + 0x60);
    if (plVar2 == (long *)0x0) {
      return false;
    }
    local_28 = param_3;
    local_2c[0] = (**(code **)(*plVar2 + 0x38))(plVar2,&local_28);
    if (local_2c[0] < 8) {
      lVar1 = *(long *)(param_1 + 0xc0);
      lVar3 = FUN_01664b40(*(undefined8 *)(param_1 + 0xb8),lVar1,param_2,local_2c);
      return lVar1 != lVar3;
    }
  }
  return false;
}


