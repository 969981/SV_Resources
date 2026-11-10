/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d5c20; name: FUN_021d5c20
 */


void FUN_021d5c20(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  FUN_00cba750(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar3 = 0;
    puVar7 = param_1 + 6;
    puVar8 = param_1 + 4;
    do {
      puVar4 = puVar7;
      uVar5 = *puVar4;
      if (uVar5 < *puVar8) {
        uVar1 = puVar4[1];
        lVar2 = lVar3;
        do {
          lVar6 = lVar2;
          *(undefined8 *)((long)param_1 + lVar6 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x20);
          *(undefined1 *)((long)param_1 + lVar6 + 0x38) =
               *(undefined1 *)((long)param_1 + lVar6 + 0x28);
          if (lVar6 == -0x20) {
            puVar7 = param_1;
            goto LAB_021d5cb0;
          }
          lVar2 = lVar6 + -0x10;
        } while (uVar5 < *(ulong *)((long)param_1 + lVar6 + 0x10));
        puVar7 = (ulong *)((long)param_1 + lVar6 + 0x20);
LAB_021d5cb0:
        *puVar7 = uVar5;
        *(char *)(puVar7 + 1) = (char)uVar1;
      }
      lVar3 = lVar3 + 0x10;
      puVar7 = puVar4 + 2;
      puVar8 = puVar4;
    } while (puVar4 + 2 != param_2);
  }
  return;
}


