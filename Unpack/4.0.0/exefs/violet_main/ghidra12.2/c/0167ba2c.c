/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167ba2c; name: FUN_0167ba2c
 */


void FUN_0167ba2c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 local_24 [4];
  
  plVar8 = (long *)param_3[2];
  if ((*(char *)((long)plVar8 + 0xa6) != '\0') &&
     ((*(char *)((long)plVar8 + 0xa7) != '\x01' || (*plVar8 != *param_3)))) {
    *(undefined1 *)(plVar8 + 0x15) = 0;
    while( true ) {
      lVar9 = param_3[2];
      bVar3 = *(byte *)(lVar9 + 0xa8);
      if (*(byte *)(lVar9 + 0xa6) <= bVar3) break;
      *(byte *)(lVar9 + 0xa8) = bVar3 + 1;
      lVar9 = *(long *)(lVar9 + (ulong)bVar3 * 8);
      if (lVar9 == 0) break;
      lVar1 = *param_3;
      lVar2 = param_3[1];
      local_24[0] = 0;
      uVar6 = FUN_0167d2e4(*(undefined8 *)(param_1 + 0x38),lVar1,lVar9,lVar2);
      if (((uVar6 & 1) == 0) &&
         (uVar6 = FUN_0167ef78(*(undefined8 *)(param_1 + 0x38),lVar1,lVar9,lVar2,local_24),
         (uVar6 & 1) == 0)) {
        bVar3 = *(byte *)(param_3[2] + 0xa6);
        cVar4 = *(char *)(param_3[1] + 0x13);
        FUN_0167bf08(param_3[2],lVar9);
        if ((bVar3 < 2) || (cVar4 == '\0')) {
          FUN_0167eeb8(param_1,*param_3,lVar9,*(undefined2 *)param_3[1],local_24[0]);
        }
        FUN_0168097c(*(undefined8 *)(param_1 + 0x38),*param_3,(char)param_3[4]);
      }
    }
    if ((param_3[3] != 0) &&
       (((lVar9 = param_3[2], *(char *)(lVar9 + 0xa7) != '\0' || (*(char *)(lVar9 + 0xa9) != '\0'))
        && (*(char *)(lVar9 + 0xa6) == '\0')))) {
      uVar7 = FUN_01243584(param_1);
      uVar5 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_0167bf90(uVar7,uVar5,1);
    }
  }
  return;
}


