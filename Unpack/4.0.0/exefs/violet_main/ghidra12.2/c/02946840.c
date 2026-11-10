/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02946840; name: FUN_02946840
 */


void FUN_02946840(undefined8 *param_1,int param_2,undefined1 param_3,int param_4,undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int local_90;
  undefined1 local_8c;
  int local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined7 local_64;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined2 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4e;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x18);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if (iVar3 == param_2) {
    lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x308);
    bVar1 = false;
    if (lVar4 != 0) {
      bVar1 = *(int *)(lVar4 + 0xc) != 0;
    }
    local_54 = 0;
    local_50 = 0;
    uStack_5a = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    uStack_5d = 0;
    local_4e = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    local_2c = 0;
    local_24 = 0;
    local_8c = 1;
    uStack_5b = (undefined1)(param_4 << bVar1);
    local_90 = param_2;
    local_88 = param_2;
    uStack_5c = param_3;
    local_58 = FUN_029454c8(*param_1,param_5);
    uVar2 = FUN_0293e270(param_1,&local_90);
    if (((((uVar2 & 1) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x288), lVar4 != 0)) &&
        (*(byte *)(lVar4 + 10) < 2)) &&
       (*(undefined4 *)(lVar4 + 0xc) = 1, *(byte *)(lVar4 + 10) == 1)) {
      *(undefined1 *)(lVar4 + 10) = 2;
    }
  }
  return;
}


