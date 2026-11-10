/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6d438; name: FUN_00f6d438
 */


void FUN_00f6d438(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  int local_50 [5];
  undefined4 local_3c;
  undefined8 local_38;
  
  if (*(long *)PTR_DAT_047d0a08 != 0) {
    bVar2 = *(byte *)(param_1 + 0x48);
    iVar3 = FUN_00f21480();
    if (((iVar3 == 1 && bVar2 < 3) && (*(long *)PTR_DAT_047d0860 != 0)) &&
       (plVar4 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea68)[bVar2],0x7c),
       plVar4 != (long *)0x0)) {
      local_38 = 0;
      lVar1 = param_1 + 0xf0;
      local_3c = 0;
      (**(code **)(*plVar4 + 0x68))(local_50,plVar4,&local_38,lVar1,&local_3c,0xc1);
      if (local_50[0] == 0) {
        FUN_00f6e468(param_1,local_38,lVar1,local_3c);
        (**(code **)(*plVar4 + 0x68))(local_50,plVar4,&local_38,lVar1,&local_3c,0xc1);
        while (local_50[0] == 0) {
          FUN_00f6e468(param_1,local_38,lVar1,local_3c);
          (**(code **)(*plVar4 + 0x68))(local_50,plVar4,&local_38,lVar1,&local_3c,0xc1);
        }
      }
    }
  }
  FUN_00f6d72c(param_1);
  FUN_00f6d584(param_1);
  return;
}


