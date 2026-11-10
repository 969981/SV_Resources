/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349b678; name: FUN_0349b678
 */


void FUN_0349b678(long param_1,undefined8 *param_2,long param_3,int *param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  puVar4 = &local_a0;
  fVar7 = 1.0 / (float)*(ushort *)((long)param_2 + 0x12);
  memcpy((void *)*param_5,(void *)*param_2,
         (ulong)*(ushort *)((long)param_2 + 0x12) * (ulong)*(byte *)(param_2 + 1) * 4);
  *(undefined2 *)((long)param_5 + 0x12) = *(undefined2 *)((long)param_2 + 0x12);
  if (*(char *)(param_1 + 0x124) != '\0') {
    uVar1 = *(uint *)(param_5 + 1);
    uVar2 = *(uint *)(param_3 + 8);
    puVar4 = (undefined8 *)
             ((long)&local_a0 - (ulong)(((uVar1 & 0xff) + 3 >> 2) * (uVar2 & 0xff) * 0x10));
    memset(&local_a0,0,0x50);
    local_a0 = 0;
    uStack_98 = 0x3f800000;
    local_80 = 0x3f80000000000000;
    uStack_78 = 0xffff3f800000;
    local_60 = 0x3f800000;
    local_90 = 0x3f800000;
    uStack_88 = 0;
    local_58 = 0;
    local_54 = 1;
    local_70 = 0x3f800000;
    uStack_68 = 0;
    FUN_034ce680(&local_a0,uVar2,uVar1,param_1,puVar4);
    local_a0 = 0x3f8000003f800000;
    FUN_034f5860(fVar7,param_3,param_5,&local_a0,puVar4,puVar4,*(undefined2 *)(param_3 + 0x12));
  }
  if (0 < *param_4) {
    lVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_4 + 2) + lVar5 * 8);
      lVar6 = *(long *)(*(long *)(param_4 + 4) + lVar5 * 8);
      puVar4 = (undefined8 *)
               ((long)puVar4 +
               -(ulong)(((*(uint *)(param_5 + 1) & 0xff) + 3 >> 2) *
                       (*(uint *)(lVar3 + 8) & 0xff) * 0x10));
      FUN_034ce680(lVar6 + 8,*(uint *)(lVar3 + 8),*(uint *)(param_5 + 1),param_1,puVar4);
      FUN_034f5860(fVar7,lVar3,param_5,lVar6 + 0x58,puVar4,puVar4,*(undefined2 *)(lVar3 + 0x12));
      *(undefined2 *)((long)param_5 + 0x12) = *(undefined2 *)(param_5 + 2);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *param_4);
  }
  return;
}


