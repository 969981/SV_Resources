/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fa380; name: FUN_003fa380
 */


undefined4 * FUN_003fa380(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  if (param_3 == 0x18) {
    bVar1 = true;
    uVar7 = 0x18;
joined_r0x003fa3e0:
    puVar8 = param_1;
    if ((param_1 == (undefined4 *)0x0) &&
       (puVar8 = (undefined4 *)FUN_003df280(), puVar8 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    iVar6 = FUN_003df070(puVar8,0,0x14);
    if (iVar6 != 0) {
      puVar8[1] = uVar7;
      if (bVar1) {
        iVar6 = param_2[5] + 0x76c;
        uVar7 = param_2[3];
        iVar3 = param_2[4];
        uVar2 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = *param_2;
        pcVar9 = "%04d%02d%02d%02d%02d%02dZ";
      }
      else {
        uVar7 = param_2[3];
        iVar3 = param_2[4];
        uVar2 = param_2[1];
        uVar4 = param_2[2];
        iVar6 = (int)param_2[5] % 100;
        uVar5 = *param_2;
        pcVar9 = "%02d%02d%02d%02d%02d%02dZ";
      }
      uVar7 = FUN_003e7390(*(undefined8 *)(puVar8 + 2),0x14,pcVar9,iVar6,iVar3 + 1,uVar7,uVar4,uVar2
                           ,uVar5);
      *puVar8 = uVar7;
      return puVar8;
    }
  }
  else {
    if (param_3 == 0x17) {
      if (param_2[5] - 0x32 < 100) {
        bVar1 = false;
        uVar7 = 0x17;
        goto joined_r0x003fa3e0;
      }
    }
    else if (param_3 == -1) {
      bVar1 = 99 < param_2[5] - 0x32;
      uVar7 = 0x17;
      if (99 < param_2[5] - 0x32) {
        uVar7 = 0x18;
      }
      goto joined_r0x003fa3e0;
    }
    puVar8 = (undefined4 *)0x0;
  }
  if (puVar8 != param_1) {
    FUN_003df2e0(puVar8);
  }
  return (undefined4 *)0x0;
}


