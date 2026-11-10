/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00483760; name: FUN_00483760
 */


bool FUN_00483760(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  uVar5 = *param_2;
  uVar4 = (ulong)uVar5;
  uVar7 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  uVar5 = 0;
  iVar3 = 0;
  puVar6 = *(undefined1 **)(param_2 + 2);
  do {
    uVar4 = uVar4 - 1;
    if (uVar7 == 0) {
      iVar3 = FUN_003e8f00(param_1,&DAT_03c67c74,1);
      return iVar3 == 1;
    }
    if (iVar3 + (uVar5 / 0x12) * 0x12 == 0) {
      iVar2 = FUN_003e8f00(param_1,&DAT_03c67c74,1);
      if (iVar2 < 1) {
        return false;
      }
      iVar2 = FUN_003e94e0(param_1,param_3,param_3);
      if (iVar2 < 1) {
        return false;
      }
    }
    puVar1 = &DAT_03c886bc;
    if (uVar4 != 0) {
      puVar1 = &DAT_03c9c9c5;
    }
    iVar2 = FUN_003e6880(param_1,"%02x%s",*puVar6,puVar1);
    uVar7 = uVar7 - 1;
    iVar3 = iVar3 + -1;
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 1;
    if (iVar2 < 1) {
      return false;
    }
  } while( true );
}


