/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d83d0; name: FUN_031d83d0
 */


void FUN_031d83d0(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  uVar7 = *(ulong *)(param_1 + 0x60);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_1 + 0x168) != 0) {
      uVar7 = uVar7 & 0xfffffffffbffffff;
    }
  }
  puVar2 = (ulong *)(((*param_2 - param_2[2]) + 7 & 0xfffffffffffffff8) + param_2[2]);
  *param_2 = (ulong)(puVar2 + 2);
  if ((ulong *)param_2[1] < puVar2 + 2) {
LAB_031d8504:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0xdeadf11d,"../..\\Common/Base/Reflect/Util/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted");
  }
  *puVar2 = uVar7;
  lVar8 = 0;
  puVar2[1] = *(ulong *)(param_1 + 0x58);
  do {
    if ((uVar7 & (long)(1 << (ulong)((uint)lVar8 & 0x1f))) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x68 + lVar8 * 8);
      puVar6 = (undefined8 *)(((*param_2 - param_2[2]) + 7 & 0xfffffffffffffff8) + param_2[2]);
      puVar9 = puVar6 + 1;
      *param_2 = (ulong)puVar9;
      if ((undefined8 *)param_2[1] < puVar9) goto LAB_031d8504;
      *puVar6 = uVar10;
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 0x20) {
      iVar3 = *(int *)(param_1 + 0x208);
      if (iVar3 != 0) {
        puVar9 = *(undefined8 **)(param_1 + 0x200);
        uVar7 = (long)iVar3 * 8 - 8;
        uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) == 0) {
          puVar6 = puVar9;
        }
        else {
          lVar8 = -((ulong)uVar1 & 3);
          puVar5 = puVar9;
          do {
            puVar6 = puVar5 + 1;
            bVar4 = lVar8 != -1;
            lVar8 = lVar8 + 1;
            *(ulong **)*puVar5 = puVar2;
            puVar5 = puVar6;
          } while (bVar4);
        }
        if (0x17 < uVar7) {
          do {
            *(ulong **)*puVar6 = puVar2;
            *(ulong **)puVar6[1] = puVar2;
            *(ulong **)puVar6[2] = puVar2;
            puVar5 = puVar6 + 3;
            puVar6 = puVar6 + 4;
            *(ulong **)*puVar5 = puVar2;
          } while (puVar6 != puVar9 + iVar3);
        }
      }
      return;
    }
  } while( true );
}


