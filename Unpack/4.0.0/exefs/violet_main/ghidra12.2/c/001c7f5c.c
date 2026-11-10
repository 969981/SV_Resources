/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c7f5c; name: FUN_001c7f5c
 */


undefined8 FUN_001c7f5c(int param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_001ec2f8(0x38);
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_001ec328(param_3);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      if (param_1 == 2) {
        *(undefined4 *)(plVar1 + 4) = *param_2;
        plVar1[2] = 0x400000002;
        *plVar1 = lVar2;
        plVar1[1] = 0;
        plVar1[5] = (long)(plVar1 + 4);
        plVar1[6] = 0;
        plVar1[3] = (long)(plVar1 + 5);
        uVar3 = FUN_001c7e44(plVar1,param_4);
      }
      else {
        uVar3 = 0;
      }
      FUN_001ec308(lVar2);
    }
    FUN_001ec308(plVar1);
  }
  return uVar3;
}


