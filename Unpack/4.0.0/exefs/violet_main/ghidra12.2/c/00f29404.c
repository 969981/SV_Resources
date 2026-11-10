/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f29404; name: FUN_00f29404
 */


void FUN_00f29404(undefined8 *param_1,long param_2,int param_3,undefined4 param_4,int param_5)

{
  char *pcVar1;
  char *param3;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70 [32];
  
  lVar4 = FUN_01289558(*(long *)(param_2 + 0x1648) + 0x108,local_70);
  if (lVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    pcVar1 = "su2_";
    if (param_5 != 2) {
      pcVar1 = "";
    }
    param3 = "su1_";
    if (param_5 != 1) {
      param3 = pcVar1;
    }
    puVar6 = &DAT_cbf29ce484222645;
    snprintf((char *)local_70,0x20,"%sdifficulty_%02d",param3,param_3);
    if (local_70[0] != 0) {
      pbVar5 = (byte *)((ulong)local_70 | 1);
      do {
        puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)local_70[0]) * 0x100000001b3);
        local_70[0] = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (local_70[0] != 0);
    }
    for (puVar3 = *(undefined8 **)(lVar4 + 0x1d0); puVar3 != *(undefined8 **)(lVar4 + 0x1d8);
        puVar3 = puVar3 + 0x16) {
      puVar2 = (undefined8 *)PTR_DAT_047d8b70;
      if (puVar3[0x13] != 0) {
        puVar2 = (undefined8 *)(puVar3[0x13] + 0x30);
      }
      if ((undefined1 *)*puVar2 == puVar6) {
        local_88 = *puVar3;
        local_80 = puVar3[1];
        uStack_78 = puVar3[2];
        goto LAB_00f29520;
      }
    }
    local_80 = 0;
    uStack_78 = 0;
    local_88 = 0;
LAB_00f29520:
    FUN_01fab5e4(param_1,*(undefined8 *)(param_2 + 0x7e0),param_3,param_4,&local_88);
  }
  return;
}


