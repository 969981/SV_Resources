/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012d220; name: FUN_0012d220
 */


void FUN_0012d220(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *local_40;
  byte local_38;
  
  lVar8 = *(long *)(param_1 + 0x18);
  local_40 = *(undefined8 **)(lVar8 + 0xb0);
  *(undefined8 *)(lVar8 + 0xb0) = *local_40;
  *local_40 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 **)(lVar8 + 0x70) = local_40;
  bVar1 = *(byte *)((long)local_40 + 9);
  *(byte *)((long)local_40 + 9) = bVar1 & 0xbf;
  if (*(byte *)(lVar8 + 0x65) - 3 < 4) {
    *(byte *)((long)local_40 + 9) = *(byte *)(lVar8 + 100) & 0x18 | bVar1 & 0x87;
  }
  else if ((bVar1 & 7) == 3) {
    *(undefined8 **)(lVar8 + 0xd8) = local_40;
  }
  local_38 = *(byte *)(local_40 + 1) | 0x40;
  puVar5 = (undefined8 *)FUN_0013df20(param_1,&local_40,2);
  if ((*(byte *)(puVar5 + 1) & 0xf) != 0) {
    uVar2 = *(undefined1 *)(param_1 + 0xb);
    uVar3 = *(undefined1 *)(lVar8 + 0x6a);
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)(lVar8 + 0x6a) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar6 + 2;
    *puVar6 = *puVar5;
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
    plVar7 = *(long **)(param_1 + 0x10);
    *(long **)(param_1 + 0x10) = plVar7 + 2;
    *plVar7 = (long)local_40;
    *(byte *)(plVar7 + 1) = local_38;
    *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) =
         *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) | 0x80;
    iVar4 = FUN_001282b0(param_1,&LAB_0012d3a0,0,
                         (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x30)) + -0x20,0);
    *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) =
         *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) & 0xff7f;
    *(undefined1 *)(param_1 + 0xb) = uVar2;
    *(undefined1 *)(lVar8 + 0x6a) = uVar3;
    if (iVar4 != 0) {
      FUN_0013b770(param_1,"__gc metamethod");
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    }
  }
  return;
}


