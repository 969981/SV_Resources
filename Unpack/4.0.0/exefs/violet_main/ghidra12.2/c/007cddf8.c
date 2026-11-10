/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cddf8; name: FUN_007cddf8
 */


void FUN_007cddf8(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_0078bb34();
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x1b8))(plVar2,param_2);
    }
    local_30 = 0x2000000000000000;
    local_28 = 0;
    FUN_00791d00(PTR_DAT_047d0868,&local_30);
    uVar3 = FUN_0078bb34();
    FUN_0078bc34(uVar3,param_2 & 0xff);
  }
  return;
}


