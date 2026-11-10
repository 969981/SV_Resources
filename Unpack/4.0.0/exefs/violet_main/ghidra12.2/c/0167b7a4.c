/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167b7a4; name: FUN_0167b7a4
 */


void FUN_0167b7a4(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char local_44 [4];
  
  *(undefined1 *)(param_3[2] + 0xa8) = 0;
  lVar7 = param_3[2];
  bVar1 = *(byte *)(lVar7 + 0xa8);
  if (bVar1 < *(byte *)(lVar7 + 0xa6)) {
    *(byte *)(lVar7 + 0xa8) = bVar1 + 1;
    for (lVar7 = *(long *)(lVar7 + (ulong)bVar1 * 8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + (ulong)bVar1 * 8)) {
      uVar5 = FUN_0167c614(*(undefined8 *)(param_1 + 0x10),param_3[1],lVar7);
      if ((uVar5 & 1) == 0) {
        local_44[0] = '\x01';
        uVar5 = FUN_0167e064(*(undefined8 *)(param_1 + 0x38),param_3[1],lVar7,
                             *(undefined2 *)*param_3,local_44);
        if ((uVar5 & 1) != 0) {
          lVar8 = *param_3;
          uVar3 = FUN_0167ea90(param_3[2]);
          cVar2 = *(char *)(lVar8 + 0x13);
          FUN_0167bf08(param_3[2],lVar7);
          if ((uVar3 < 2 || cVar2 == '\0') && (local_44[0] != '\0')) {
            uVar6 = FUN_01243584(param_1);
            uVar4 = (**(code **)(*(long *)param_3[1] + 0x98))();
            FUN_0167ef30(uVar6,uVar4,lVar7,*(undefined2 *)*param_3);
          }
        }
      }
      lVar7 = param_3[2];
      bVar1 = *(byte *)(lVar7 + 0xa8);
      if (*(byte *)(lVar7 + 0xa6) <= bVar1) {
        return;
      }
      *(byte *)(lVar7 + 0xa8) = bVar1 + 1;
    }
  }
  return;
}


