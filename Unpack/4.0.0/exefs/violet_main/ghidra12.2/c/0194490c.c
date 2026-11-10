/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0194490c; name: FUN_0194490c
 */


void FUN_0194490c(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char *__haystack;
  
  lVar2 = *(long *)(param_1 + 0x138);
  lVar3 = *(long *)(param_1 + 0x140) - lVar2;
  *(int *)(param_1 + 0x39c) = param_2;
  puVar4 = PTR_PTR_047d4508;
  if (lVar3 != 0) {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(*(long *)(lVar2 + uVar8 * 8) + 0x40);
      puVar1 = (undefined8 *)puVar4;
      if (lVar7 != 0) {
        puVar1 = (undefined8 *)(lVar7 + 0x38);
      }
      __haystack = (char *)*puVar1;
      pcVar5 = strstr(__haystack,"p1_");
      if (pcVar5 == (char *)0x0) {
        pcVar5 = strstr(__haystack,"p2_");
        if (pcVar5 != (char *)0x0) {
          iVar6 = 2;
          goto LAB_0194499c;
        }
      }
      else {
        iVar6 = 1;
LAB_0194499c:
        if (iVar6 != param_2) {
          FUN_019449f8(param_1,uVar8);
          return;
        }
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar3 >> 3));
  }
  return;
}


