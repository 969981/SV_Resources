/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01633cc8; name: FUN_01633cc8
 */


void FUN_01633cc8(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long local_80;
  long lStack_78;
  uint local_70;
  long local_68;
  long lStack_60;
  undefined1 local_58;
  undefined1 auStack_38 [8];
  
  lVar6 = param_3[3];
  if (*(char *)(lVar6 + 6) == '\0') {
    if (*(char *)(lVar6 + 4) == '\a') {
      *(undefined1 *)(lVar6 + 4) = *(undefined1 *)(*param_3 + 0x3c);
    }
  }
  else {
    FUN_029851c8(*(undefined8 *)(param_1 + 0x20),param_3[2],(char)param_3[4],*param_3 + 0x3c,
                 *param_3,*(undefined1 *)((long)param_3 + 0x21));
    if ((char)param_3[4] != '\0') {
      uVar8 = 0;
      do {
        bVar1 = *(byte *)(*param_3 + uVar8 + 0x3c);
        if (bVar1 < 8) {
          if (bVar1 != 7) {
            uVar2 = (**(code **)(*(long *)param_3[2] + 0x98))();
            uVar4 = 0x14;
            goto LAB_01633e38;
          }
        }
        else {
          uVar2 = (**(code **)(**(long **)(*param_3 + uVar8 * 8) + 0x98))();
          FUN_029858ac(param_1,6,uVar2);
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          uVar2 = (**(code **)(*(long *)param_3[2] + 0x98))();
          uVar4 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),uVar2);
          FUN_01248470(uVar7,uVar4,0x18);
          uVar2 = (**(code **)(*(long *)param_3[2] + 0x98))();
          FUN_029858ac(param_1,0x15,uVar2);
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290);
          uVar2 = (**(code **)(*(long *)param_3[2] + 0x98))();
          uVar3 = (**(code **)(**(long **)(*param_3 + uVar8 * 8) + 0x98))();
          uVar5 = FUN_0128ab58(uVar4,uVar2,uVar3);
          if ((uVar5 & 1) == 0) {
            uVar2 = (**(code **)(*(long *)param_3[2] + 0x98))();
            uVar4 = 0x1c;
LAB_01633e38:
            FUN_029858ac(param_1,uVar4,uVar2);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(byte *)(param_3 + 4));
    }
  }
  local_68 = *param_3;
  lStack_60 = local_68 + 0x42;
  lStack_78 = param_3[1];
  local_80 = param_3[2];
  local_58 = *(undefined1 *)((long)param_3 + 0x21);
  local_70 = (uint)*(byte *)(param_3 + 4);
  FUN_02985718(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x520),auStack_38,&local_80);
  return;
}


