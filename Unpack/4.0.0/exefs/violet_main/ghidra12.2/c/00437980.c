/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00437980; name: FUN_00437980
 */


undefined8 FUN_00437980(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar2 = FUN_0043b680();
  pcVar4 = *(code **)(lVar2 + 0x180);
  if (pcVar4 == (code *)0x0) {
    if (param_4 >> 0x3e != 0) {
      do {
        uVar3 = FUN_0043b6a0(param_1);
        uVar1 = FUN_0043b670(param_1);
        FUN_00436a80(param_3,param_2,0x4000000000000000,lVar2,lVar2 + 0x80,lVar2 + 0x100,uVar3,uVar1
                    );
        param_4 = param_4 + 0xc000000000000000;
        param_3 = param_3 + 0x4000000000000000;
        param_2 = param_2 + 0x4000000000000000;
      } while (param_4 >> 0x3e != 0);
    }
    if (param_4 != 0) {
      uVar3 = FUN_0043b6a0(param_1);
      uVar1 = FUN_0043b670(param_1);
      FUN_00436a80(param_3,param_2,param_4,lVar2,lVar2 + 0x80,lVar2 + 0x100,uVar3,uVar1);
    }
  }
  else {
    uVar3 = FUN_0043b6a0(param_1);
    (*pcVar4)(param_3,param_2,param_4,lVar2,uVar3);
  }
  return 1;
}


