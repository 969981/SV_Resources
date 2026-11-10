/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e6ab0; name: FUN_034e6ab0
 */


undefined8 * FUN_034e6ab0(long *param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  
  puVar3 = PTR_DAT_047e2fd0;
  plVar1 = param_1 + 2;
  if (param_3 != 1) {
    plVar1 = param_1;
  }
  puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x50);
  if (puVar6 == (undefined8 *)0x0) goto LAB_034e6bd4;
  puVar6[6] = 0;
  puVar6[5] = 0;
  *puVar6 = 0x20000000;
  *(undefined4 *)((long)puVar6 + 0x3c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  puVar4 = PTR_DAT_047e2fe8;
  *(byte *)(puVar6 + 8) = *(byte *)(puVar6 + 8) & 0xfc;
  iVar5 = FUN_034e6668(puVar6,param_2,*(undefined4 *)(*(long *)puVar4 + 0x78));
  if (iVar5 != 2) {
    uVar2 = *(uint *)(plVar1 + 1);
    uVar8 = *(uint *)((long)plVar1 + 0xc);
    if (uVar8 <= uVar2) {
      iVar5 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar5 = 1;
      }
      uVar8 = iVar5 + uVar8;
      lVar7 = (**(code **)(puVar3 + 0x20))(0,*plVar1,(ulong)uVar8 << 3);
      if (lVar7 == 0) goto LAB_034e6ba4;
      *plVar1 = lVar7;
      *(uint *)((long)plVar1 + 0xc) = uVar8;
    }
    if (uVar2 < uVar8) {
      uVar8 = *(uint *)(plVar1 + 1);
      *(uint *)(plVar1 + 1) = uVar8 + 1;
      if (*plVar1 != 0) {
        *(undefined8 **)(*plVar1 + (ulong)uVar8 * 8) = puVar6;
        return puVar6;
      }
    }
  }
LAB_034e6ba4:
  if (puVar6[5] != 0) {
    *(undefined4 *)(puVar6 + 6) = 0;
    (**(code **)(puVar3 + 0x30))(0);
    puVar6[5] = 0;
    *(undefined4 *)((long)puVar6 + 0x34) = 0;
  }
  (**(code **)(puVar3 + 0x30))(0,puVar6);
LAB_034e6bd4:
  (*(code *)**(undefined8 **)*param_2)
            (*(undefined4 *)((long)param_2 + 0x14),(undefined8 *)*param_2,param_2[1],1);
  return (undefined8 *)0x0;
}


