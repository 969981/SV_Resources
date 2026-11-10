/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc83dc; name: FUN_00dc83dc
 */


byte FUN_00dc83dc(long *param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  uint *puVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  ThreadType *pTVar11;
  undefined8 local_1c50;
  ulong local_1c48 [4];
  undefined1 auStack_1c28 [7160];
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_file","CopyToBuffer",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/fs/archive_data.cpp"
               ,0x67);
  }
  piVar6 = (int *)param_1[1];
  if (piVar6 == (int *)0x0) {
LAB_00dc8678:
    bVar3 = 0;
    goto LAB_00dc852c;
  }
  puVar7 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (6 - (long)*piVar6)));
  puVar7 = (uint *)((long)puVar7 + (param_2 & 0xffffffff) * 4 + (ulong)*puVar7 + 4);
  piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar7 = (uint *)(long)*piVar6;
  puVar8 = (ushort *)((long)piVar6 - (long)puVar7);
  uVar2 = *puVar8;
  if (uVar2 < 0xd) {
    if (6 < uVar2) goto LAB_00dc8570;
LAB_00dc8740:
    uVar10 = 0;
  }
  else {
    if ((ulong)puVar8[6] == 0) {
LAB_00dc8570:
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = (uint *)((long)piVar6 + (ulong)puVar8[6]);
      puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
    }
    if ((ulong)puVar8[3] != 0) {
      bVar3 = *(byte *)((long)piVar6 + (ulong)puVar8[3]);
      if (bVar3 == 3) {
        uVar1 = *puVar7;
        if ((uVar2 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(ulong *)((long)piVar6 + (ulong)puVar8[5]);
        }
        if (((*PTR_DAT_047d8c40 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar4 != 0)) {
          FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c40);
        }
        iVar4 = 0x10;
        lVar9 = *(long *)PTR_DAT_047d8c48;
        pTVar11 = (ThreadType *)0x0;
        *(long *)PTR_DAT_047d8c50 = lVar9;
        if ((0xa00000 < uVar10) && (*(int *)(lVar9 + 0x310) != 2)) {
          pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
          iVar4 = nn::os::GetThreadPriority(pTVar11);
          if (iVar4 < 0x11) {
            nn::os::ChangeThreadPriority(pTVar11,0x11);
            nn::os::YieldThread();
          }
          else {
            pTVar11 = (ThreadType *)0x0;
          }
        }
        lVar9 = tpidr_el0;
        uVar5 = FUN_00dc8750(puVar7 + 1,uVar1,param_3,uVar10,1,0,0,0,0,0,0,lVar9 + 0xb8,0x80000,3);
        bVar3 = uVar5 != 0 && uVar5 <= uVar10;
        if (pTVar11 != (ThreadType *)0x0) {
          nn::os::ChangeThreadPriority(pTVar11,iVar4);
        }
        goto LAB_00dc852c;
      }
      if (bVar3 == 0xff) {
        memcpy(param_3,puVar7 + 1,(ulong)*puVar7);
        bVar3 = 1;
        goto LAB_00dc852c;
      }
      if (bVar3 - 1 < 2) {
        FUN_0135d328(auStack_1c28,param_4,0);
        FUN_00dc9080(local_1c48 + 3,100);
        local_1c48[1] = 0;
        local_1c48[2] = 0;
        local_1c48[0] = (ulong)*puVar7;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0xb) {
          local_1c50 = 0;
        }
        else {
          uVar10 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[5];
          local_1c50 = 0;
          if (uVar10 != 0) {
            local_1c50 = *(undefined8 *)((long)piVar6 + uVar10);
          }
        }
        lVar9 = FUN_00dc9100(local_1c48[3],param_3,&local_1c50,puVar7 + 1,local_1c48,local_1c48 + 1)
        ;
        bVar3 = lVar9 == 0;
        FUN_00dc9030(local_1c48[3]);
        FUN_0135d2ec(auStack_1c28);
        goto LAB_00dc852c;
      }
      if (bVar3 != 0) goto LAB_00dc8678;
    }
    param_1 = param_3;
    if ((uVar2 < 0xb) || ((ulong)puVar8[5] == 0)) goto LAB_00dc8740;
    uVar10 = *(ulong *)((long)piVar6 + (ulong)puVar8[5]);
  }
  bVar3 = nn::util::DecompressZlib(param_1,uVar10,puVar7 + 1,(ulong)*puVar7,auStack_1c28,0x1bf8);
LAB_00dc852c:
  return bVar3 & 1;
}


