/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008dd7a4; name: FUN_008dd7a4
 */


void FUN_008dd7a4(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_047d1f00;
  plVar4 = (long *)(param_1 + 0x20);
  if ((char *)*plVar4 != (char *)0x0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (0 < iVar3) {
      lVar5 = 0;
      lVar6 = 0;
      lVar7 = 1;
      cVar1 = *(char *)*plVar4;
      while( true ) {
        if (cVar1 != '\0') {
          FUN_0271ab74(*(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x20) +
                                   *(long *)(puVar2 + (ulong)*(uint *)(param_1 + 0x10) * 8) + lVar5)
                        + 0x68),param_2);
          FUN_008dce84(*(long *)(param_1 + 0x20) + lVar6);
          iVar3 = *(int *)(param_1 + 0x30);
        }
        if (iVar3 <= lVar7) break;
        lVar6 = lVar6 + 0x180;
        lVar5 = lVar5 + 0x40;
        lVar7 = lVar7 + 1;
        cVar1 = *(char *)(*plVar4 + lVar6);
      }
    }
    (**(code **)(*param_3 + 0x18))(param_3,*(undefined8 *)(param_1 + 0x28));
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}


