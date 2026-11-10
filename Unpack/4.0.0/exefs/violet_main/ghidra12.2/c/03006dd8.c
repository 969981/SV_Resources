/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03006dd8; name: FUN_03006dd8
 */


void FUN_03006dd8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((int)param_1[3] != 0) {
    iVar3 = *(int *)param_1[4];
    if (0 < (int)param_1[1]) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)(*param_1 + lVar4);
        if (*(int *)(puVar1 + 7) != -1) {
          puVar2 = (undefined8 *)
                   (*(long *)(param_1[4] + 0x18) +
                   (long)(int)(*(uint *)((long)puVar1 + 0x3c) & *(uint *)(param_1[4] + 0x10)) * 0x40
                   );
          *(int *)(puVar2 + 7) = iVar3 + 1;
          DataMemoryBarrier(2,3);
          uVar6 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar6;
          uVar6 = puVar1[2];
          puVar2[3] = puVar1[3];
          puVar2[2] = uVar6;
          uVar6 = puVar1[4];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar6;
          puVar2[6] = puVar1[6];
          *(undefined4 *)(puVar1 + 7) = 0xffffffff;
          puVar1[6] = 0xffffffffffffffff;
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x40;
      } while (lVar5 < (int)param_1[1]);
    }
    *(int *)param_1[4] = iVar3 + 1;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}


