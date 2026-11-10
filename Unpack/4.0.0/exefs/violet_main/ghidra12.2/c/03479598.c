/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03479598; name: FUN_03479598
 */


undefined8 FUN_03479598(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  void *__dest;
  byte *pbVar6;
  ulong uVar7;
  byte *__src;
  undefined8 uVar8;
  ulong uVar9;
  
  iVar2 = *(int *)(param_2 + 5);
  lVar1 = param_2 + (ulong)(uint)(iVar2 * 5);
  uVar3 = *(uint *)(lVar1 + 9);
  uVar7 = (ulong)uVar3;
  *(ushort *)(param_1 + 0x28) = (ushort)*(byte *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar1 + 0xd);
  puVar5 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    __dest = (void *)(**(code **)(puVar5 + 0x10))(1,uVar7);
    *(void **)(param_1 + 0x20) = __dest;
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    memcpy(__dest,(void *)(lVar1 + 0xe),uVar7);
  }
  *(int *)(param_1 + 0x18) = iVar2;
  pbVar6 = (byte *)(lVar1 + 0xe + uVar7);
  __src = pbVar6 + 1;
  bVar4 = *pbVar6;
  uVar7 = (ulong)bVar4;
  if (uVar7 == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(puVar5 + 0x30))(1);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
LAB_034796a8:
    bVar4 = *__src;
    uVar7 = (ulong)bVar4;
    if (uVar7 == 0) {
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(puVar5 + 0x30))(1);
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 1;
      }
    }
    else {
      uVar9 = (ulong)(bVar4 + 4) & 0x1fc;
      pbVar6 = (byte *)(**(code **)(puVar5 + 0x20))
                                 (1,*(undefined8 *)(param_1 + 0x38),uVar9 + uVar7 * 8);
      if (pbVar6 == (byte *)0x0) goto LAB_03479700;
      *pbVar6 = bVar4;
      memcpy(pbVar6 + 1,__src + 1,uVar7);
      memcpy(pbVar6 + uVar9,__src + 1 + uVar7,uVar7 << 3);
      *(byte **)(param_1 + 0x38) = pbVar6;
    }
    uVar8 = 1;
  }
  else {
    uVar9 = (ulong)(bVar4 + 4) & 0x1fc;
    pbVar6 = (byte *)(**(code **)(puVar5 + 0x20))
                               (1,*(undefined8 *)(param_1 + 0x30),uVar9 + uVar7 * 4);
    if (pbVar6 != (byte *)0x0) {
      *pbVar6 = bVar4;
      memcpy(pbVar6 + 1,__src,uVar7);
      memcpy(pbVar6 + uVar9,__src + uVar7,uVar7 * 4);
      __src = __src + uVar7 + uVar7 * 4;
      *(byte **)(param_1 + 0x30) = pbVar6;
      goto LAB_034796a8;
    }
LAB_03479700:
    uVar8 = 2;
  }
  return uVar8;
}


