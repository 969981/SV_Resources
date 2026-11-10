/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01907a70; name: FUN_01907a70
 */


void FUN_01907a70(undefined8 param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  FUN_01582534();
  uVar2 = FUN_014813e4();
  uVar3 = FUN_01481400(uVar2,param_3[1]);
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar4 = (long *)FUN_014813f4(param_1,param_3[1]);
  if (*param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_014813f4(param_1);
  }
  uVar3 = (**(code **)(*plVar4 + 0x200))(plVar4);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (((char)param_3[4] != '\0') &&
     (uVar3 = (**(code **)(*plVar4 + 0x308))(plVar4), (uVar3 & 1) != 0)) {
    return;
  }
  bVar1 = FUN_01907bec(param_1,plVar4,(short)param_3[2],*(undefined1 *)((long)param_3 + 10));
  bVar1 = bVar1 & 1;
  if (*(char *)((long)param_3 + 0x12) != '\0') {
    uVar5 = FUN_01243584(param_1);
    FUN_0197495c(uVar5,uVar2);
  }
  if ((*(char *)((long)param_3 + 0x13) == '\x02') ||
     ((bVar1 & *(char *)((long)param_3 + 0x13) == '\x01') != 0)) {
    FUN_02983468(param_1,(short)param_3[5],*(undefined1 *)((long)param_3 + 0x16),
                 *(undefined1 *)((long)param_3 + 0x17));
  }
  if (bVar1 == 0) {
    uVar5 = FUN_01246e90(param_1);
    FUN_029342a0(uVar5,plVar4,*(undefined1 *)((long)param_3 + 10),param_3[3]);
  }
  else {
    FUN_01907c74(param_1,plVar4,(short)param_3[2],*(undefined1 *)((long)param_3 + 10),param_3[3],
                 param_3 + 6,*(char *)((long)param_3 + 0x11) == '\0');
  }
  if (*(char *)((long)param_3 + 0x12) != '\0') {
    uVar5 = FUN_01243584(param_1);
    FUN_018521d8(uVar5,uVar2);
  }
  *param_2 = bVar1;
  return;
}


