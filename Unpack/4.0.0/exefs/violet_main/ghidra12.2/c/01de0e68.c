/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de0e68; name: FUN_01de0e68
 */


undefined8 FUN_01de0e68(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x1714) == '\0') {
    uVar3 = 1;
  }
  else {
    lVar2 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,0,0);
    if ((lVar2 != 0) && (iVar1 = FUN_014e94fc(param_1,1,0,0), iVar1 == 1)) {
      return 1;
    }
    lVar2 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,0,1);
    if ((lVar2 != 0) && (iVar1 = FUN_014e94fc(param_1,1,0,1), iVar1 == 1)) {
      return 1;
    }
    lVar2 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,0,2);
    if ((lVar2 != 0) && (iVar1 = FUN_014e94fc(param_1,1,0,2), iVar1 == 1)) {
      return 1;
    }
    lVar2 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,0,3);
    if ((lVar2 != 0) && (iVar1 = FUN_014e94fc(param_1,1,0,3), iVar1 == 1)) {
      return 1;
    }
    lVar2 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,0,4);
    if ((lVar2 != 0) && (iVar1 = FUN_014e94fc(param_1,1,0,4), iVar1 == 1)) {
      return 1;
    }
    lVar2 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,0,5);
    if ((lVar2 != 0) && (iVar1 = FUN_014e94fc(param_1,1,0,5), iVar1 == 1)) {
      return 1;
    }
    uVar3 = 4;
  }
  return uVar3;
}


