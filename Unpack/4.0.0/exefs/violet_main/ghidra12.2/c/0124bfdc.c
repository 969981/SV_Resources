/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124bfdc; name: FUN_0124bfdc
 */


undefined8 FUN_0124bfdc(long param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_14;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pcVar2 = (code *)FUN_0124c070(param_2);
  if (pcVar2 == (code *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (*pcVar2)(&local_14,param_3);
    uVar4 = 0;
    if (lVar3 != 0) {
      FUN_0124ed80(uVar1,3,param_2,4,0,param_3 & 0xff,lVar3,local_14);
      uVar4 = 1;
    }
  }
  return uVar4;
}


