/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd035c; name: FUN_00cd035c
 */


void FUN_00cd035c(long param_1,char *param_2,undefined8 param_3,int param_4)

{
  ThreadType *pTVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x249) = 0;
  pTVar1 = (ThreadType *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x24a) = 0;
  if (*(long *)(param_1 + 0x400) == *(long *)(param_1 + 0x408)) {
    FUN_012e4420(pTVar1,param_2,param_3,param_4,&LAB_014040e8);
    return;
  }
  nn::os::CreateThread
            (pTVar1,(_func_void_void_ptr *)&LAB_014040e8,pTVar1,*(void **)(param_1 + 0x200),
             *(ulong *)(param_1 + 0x228),param_4,0);
  nn::os::SetThreadCoreMask(pTVar1,0,1);
  nn::os::SetThreadName(pTVar1,param_2);
  nn::os::StartThread(pTVar1);
  plVar5 = *(long **)(param_1 + 0x400);
  plVar4 = *(long **)(param_1 + 0x408);
  if (plVar5 != plVar4) {
    lVar3 = *plVar5;
    *(undefined1 *)(lVar3 + 0x248) = 0;
    *(undefined1 *)(lVar3 + 0x249) = 0;
    *(undefined1 *)(lVar3 + 0x24a) = 0;
    FUN_012e4420(lVar3 + 0x40,param_2,1,param_4,&LAB_014040e8);
    if (plVar5 + 1 != plVar4) {
      lVar3 = plVar5[1];
      *(undefined1 *)(lVar3 + 0x248) = 0;
      *(undefined1 *)(lVar3 + 0x249) = 0;
      *(undefined1 *)(lVar3 + 0x24a) = 0;
      FUN_012e4420(lVar3 + 0x40,param_2,2,param_4,&LAB_014040e8);
      if (plVar5 + 2 != plVar4) {
        lVar3 = plVar5[2];
        *(undefined1 *)(lVar3 + 0x248) = 0;
        *(undefined1 *)(lVar3 + 0x249) = 0;
        *(undefined1 *)(lVar3 + 0x24a) = 0;
        FUN_012e4420(lVar3 + 0x40,param_2,0,param_4,&LAB_014040e8);
        if (plVar5 + 3 != plVar4) {
          uVar8 = 4;
          plVar5 = plVar5 + 3;
          do {
            plVar6 = plVar5 + 1;
            lVar3 = *plVar5;
            *(undefined1 *)(lVar3 + 0x248) = 0;
            *(undefined1 *)(lVar3 + 0x249) = 0;
            uVar2 = uVar8 / 3;
            iVar7 = (int)uVar8;
            uVar8 = (ulong)(iVar7 + 1);
            *(undefined1 *)(lVar3 + 0x24a) = 0;
            FUN_012e4420(lVar3 + 0x40,param_2,iVar7 + (int)uVar2 * -3,param_4,&LAB_014040e8);
            plVar5 = plVar6;
          } while (plVar4 != plVar6);
        }
      }
    }
  }
  return;
}


