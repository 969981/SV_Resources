/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004944b0; name: FUN_004944b0
 */


undefined8 FUN_004944b0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  ushort *puVar3;
  
  switch(*param_2) {
  case 0:
    pcVar2 = "othername:<unsupported>";
    break;
  case 1:
    pcVar2 = "email:";
    goto LAB_00494560;
  case 2:
    pcVar2 = "DNS:";
    goto LAB_00494560;
  case 3:
    pcVar2 = "X400Name:<unsupported>";
    break;
  case 4:
    FUN_003e6880(param_1,"DirName:");
    FUN_003dce80(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    return 1;
  case 5:
    pcVar2 = "EdiPartyName:<unsupported>";
    break;
  case 6:
    pcVar2 = "URI:";
LAB_00494560:
    FUN_003e6880(param_1,pcVar2);
    FUN_0048aa40(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 7:
    puVar3 = *(ushort **)(*(int **)(param_2 + 2) + 2);
    iVar1 = **(int **)(param_2 + 2);
    if (iVar1 == 0x10) {
      FUN_003e6880(param_1,"IP Address");
      FUN_003e6880(param_1,&DAT_03be1485,((*puVar3 & 0xff00) << 8 | (uint)*puVar3 << 0x18) >> 0x10);
      FUN_003e6880(param_1,&DAT_03be1485,
                   ((puVar3[1] & 0xff00) << 8 | (uint)puVar3[1] << 0x18) >> 0x10);
      FUN_003e6880(param_1,&DAT_03be1485,
                   ((puVar3[2] & 0xff00) << 8 | (uint)puVar3[2] << 0x18) >> 0x10);
      FUN_003e6880(param_1,&DAT_03be1485,
                   ((puVar3[3] & 0xff00) << 8 | (uint)puVar3[3] << 0x18) >> 0x10);
      FUN_003e6880(param_1,&DAT_03be1485,
                   ((puVar3[4] & 0xff00) << 8 | (uint)puVar3[4] << 0x18) >> 0x10);
      FUN_003e6880(param_1,&DAT_03be1485,
                   ((puVar3[5] & 0xff00) << 8 | (uint)puVar3[5] << 0x18) >> 0x10);
      FUN_003e6880(param_1,&DAT_03be1485,
                   ((puVar3[6] & 0xff00) << 8 | (uint)puVar3[6] << 0x18) >> 0x10);
      FUN_003e6880(param_1,&DAT_03be1485,
                   ((puVar3[7] & 0xff00) << 8 | (uint)puVar3[7] << 0x18) >> 0x10);
      FUN_003e9110(param_1,&DAT_03c67c74);
      return 1;
    }
    if (iVar1 == 4) {
      FUN_003e6880(param_1,"IP Address:%d.%d.%d.%d",(char)*puVar3,*(undefined1 *)((long)puVar3 + 1),
                   (char)puVar3[1],*(undefined1 *)((long)puVar3 + 3));
      return 1;
    }
    pcVar2 = "IP Address:<invalid>";
    break;
  case 8:
    FUN_003e6880(param_1,"Registered ID:");
    FUN_003dfa30(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  default:
    return 1;
  }
  FUN_003e6880(param_1,pcVar2);
  return 1;
}


