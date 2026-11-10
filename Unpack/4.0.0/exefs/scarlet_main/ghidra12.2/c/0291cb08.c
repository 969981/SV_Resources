/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291cb08; name: FUN_0291cb08
 */


int FUN_0291cb08(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  iVar2 = (**(code **)(**(long **)(param_1 + 0x50) + 8))(*(long **)(param_1 + 0x50),param_2 + iVar1)
  ;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x70) + 8))
                    (*(long **)(param_1 + 0x70),param_2 + (iVar2 + iVar1));
  iVar3 = iVar3 + iVar2 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 8))(*(long **)(param_1 + 0x30),param_2 + iVar3)
  ;
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x90) + 8))(*(long **)(param_1 + 0x90),param_2 + iVar1)
  ;
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0xb0) + 8))(*(long **)(param_1 + 0xb0),param_2 + iVar3)
  ;
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0xd0) + 8))(*(long **)(param_1 + 0xd0),param_2 + iVar1)
  ;
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0xf0) + 8))(*(long **)(param_1 + 0xf0),param_2 + iVar3)
  ;
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x110) + 8))
                    (*(long **)(param_1 + 0x110),param_2 + iVar1);
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x130) + 8))
                    (*(long **)(param_1 + 0x130),param_2 + iVar3);
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x150) + 8))
                    (*(long **)(param_1 + 0x150),param_2 + iVar1);
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 8))
                    (*(long **)(param_1 + 0x170),param_2 + iVar3);
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 400) + 8))(*(long **)(param_1 + 400),param_2 + iVar1);
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x1b0) + 8))
                    (*(long **)(param_1 + 0x1b0),param_2 + iVar3);
  iVar1 = iVar1 + iVar3;
  iVar3 = FUN_0291cd98(*(undefined8 *)(param_1 + 0x1d0),param_2 + iVar1);
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x1f0) + 8))
                    (*(long **)(param_1 + 0x1f0),param_2 + iVar3);
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x210) + 8))
                    (*(long **)(param_1 + 0x210),param_2 + iVar1);
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x230) + 8))
                    (*(long **)(param_1 + 0x230),param_2 + iVar3);
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x250) + 8))
                    (*(long **)(param_1 + 0x250),param_2 + iVar1);
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x270) + 8))
                    (*(long **)(param_1 + 0x270),param_2 + iVar3);
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x2b0) + 8))
                    (*(long **)(param_1 + 0x2b0),param_2 + iVar1);
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x2d0) + 8))
                    (*(long **)(param_1 + 0x2d0),param_2 + iVar3);
  iVar1 = iVar1 + iVar3;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x2f0) + 8))
                    (*(long **)(param_1 + 0x2f0),param_2 + iVar1);
  iVar3 = iVar3 + iVar1;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x310) + 8))
                    (*(long **)(param_1 + 0x310),param_2 + iVar3);
  iVar1 = iVar1 + iVar3;
  iVar3 = FUN_0291cdcc(param_1 + 0x350,param_2 + iVar1);
  iVar1 = iVar1 + iVar3;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + iVar1);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + (iVar1 + 4));
  *(undefined1 *)(param_1 + 0x370) = *(undefined1 *)(param_2 + (iVar1 + 8));
  return iVar1 + 9;
}


