/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017486b8; name: FUN_017486b8
 */


void FUN_017486b8(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  memset(param_1 + 0x10a7,0,0x5dc4);
  memset(param_1 + 8,0,0x8368);
  FUN_017488e0(param_1);
  lVar1 = 0;
  lVar4 = 3000;
  do {
    *(undefined4 *)((long)param_1 + lVar1 + 0x25e8) = 0;
    *(undefined2 *)((long)param_1 + lVar1 + 0x25ec) = 0;
    lVar4 = lVar4 + -2;
    *(undefined4 *)((long)param_1 + lVar1 + 0x25f0) = 0;
    *(undefined1 *)((long)param_1 + lVar1 + 0x25f4) = 0;
    *(undefined1 *)((long)param_1 + lVar1 + 0x25f5) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x1c60) = 0;
  plVar5 = param_1 + 0x1c61;
  uVar3 = param_1[0x1c62] - *plVar5;
  if (uVar3 >> 4 < 0x753) {
    FUN_01748950(plVar5,30000 - uVar3);
  }
  else if (uVar3 != 30000) {
    param_1[0x1c62] = *plVar5 + 30000;
  }
  plVar6 = param_1 + 0x1c68;
  uVar3 = param_1[0x1c69] - *plVar6;
  if (uVar3 >> 6 < 0x1ad) {
    FUN_01748950(plVar6,0x6b40 - uVar3);
  }
  else if (uVar3 != 0x6b40) {
    param_1[0x1c69] = *plVar6 + 0x6b40;
  }
  plVar7 = param_1 + 0x1c6f;
  uVar3 = param_1[0x1c70] - *plVar7;
  if (uVar3 < 0xd0d8) {
    FUN_01748950(plVar7,0xd0d8 - uVar3);
  }
  else if (uVar3 != 0xd0d8) {
    param_1[0x1c70] = *plVar7 + 0xd0d8;
  }
  plVar8 = param_1 + 0x1c76;
  uVar3 = param_1[0x1c77] - *plVar8;
  if (uVar3 < 0x58) {
    FUN_01748950(plVar8,0x58 - uVar3);
  }
  else if (uVar3 != 0x58) {
    param_1[0x1c77] = *plVar8 + 0x58;
  }
  memset((void *)*plVar5,0,30000);
  memset((void *)*plVar6,0,0x6b40);
  memset((void *)*plVar7,0,0xd0d8);
  memset((void *)*plVar8,0,0x58);
  puVar2 = (undefined4 *)((long)param_1 + 0x8544);
  lVar1 = 3000;
  do {
    puVar2[-2] = 0;
    lVar1 = lVar1 + -2;
    *(undefined1 *)(puVar2 + -1) = 0;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2 = puVar2 + 4;
  } while (lVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x01748874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}


